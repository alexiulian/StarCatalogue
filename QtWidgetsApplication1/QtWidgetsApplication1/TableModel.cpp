#include "TableModel.h"

int TableModel::rowCount(const QModelIndex& parent) const
{
    return this->repo.getSize();
}

int TableModel::columnCount(const QModelIndex& parent) const
{
    return this->repo.getSize();
}

QVariant TableModel::data(const QModelIndex& index, int role) const
{
    
    int row = index.row();
    int column = index.column();

    auto currentStar = this->repo.getStars()[row];
    if (role == Qt::DisplayRole)
    {
        switch (column)
        {
		case 0:
			return QString::fromStdString(currentStar.getName());
		case 1:
			return QString::fromStdString(currentStar.getConstellation());
		case 2:
			return QString::fromStdString(to_string(currentStar.getRa()));
		case 3:
			return QString::fromStdString(to_string(currentStar.getDec()));
		case 4:
			return QString::fromStdString(to_string(currentStar.getDiameter()));
		default:
			break;
		}
	}	
    
    return QVariant();
}

QVariant TableModel::headerData(int section, Qt::Orientation orientation, int role) const
{
	
	if (role == Qt::DisplayRole)
	{
		if (orientation == Qt::Horizontal)
		{
			switch (section)
			{
			case 0:
				return QString("Name");
			case 1:
				return QString("Constellation");
			case 2:
				return QString("Ra");
			case 3:
				return QString("Dec");
			case 4:
				return QString("Diameter");
			default:
				break;
			}
		}
	}
	return QVariant();
}

void TableModel::addStar(Star& star)
{

	beginInsertRows(QModelIndex(), this->repo.getSize(), this->repo.getSize());
	this->repo.addStar(star);
	endInsertRows();

	emit dataChanged(this->index(0, 0), this->index(this->rowCount() - 1, this->columnCount() - 1));
}

bool TableModel::setData(const QModelIndex& index, const QVariant& value, int role)
{
	/*if(role == Qt::EditRole)
		return false;*/

	int row = index.row();
	int column = index.column();

	auto currentStar = this->repo.getStars()[row];
	switch (column)
	{
	case 0: {
		if (value.toString().toStdString() != "") {
			currentStar.setName(value.toString().toStdString());
		}
		break; }
	case 1: {
		  currentStar.setConstellation(value.toString().toStdString());

		  break;
	}
	case 2: {
		currentStar.setRa(value.toInt());
		break; 
	}
	case 3: {
		currentStar.setDec(value.toInt());
		break; 
	}
	case 4: {
		if(value.toString().toInt() >= 10)
			currentStar.setDiameter(value.toInt());
		break; 
	}
	default:
		break;

	}

	emit dataChanged(index, index);

	return true;

}

Qt::ItemFlags TableModel::flags(const QModelIndex& index) const
{
	int col = index.column();
	if (col == 1)
		return Qt::ItemFlags();
	return Qt::ItemIsEnabled | Qt::ItemIsSelectable | Qt::ItemIsEditable;
}
