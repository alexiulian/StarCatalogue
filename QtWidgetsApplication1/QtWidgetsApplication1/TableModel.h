#pragma once
#include <qabstractitemmodel.h>
#include "Repo.h"
class TableModel :  public QAbstractTableModel
{

private:
	Repo& repo;
public:
	TableModel(Repo& repo) : repo{ repo } {};
	~TableModel() {};
	int rowCount(const QModelIndex& parent = QModelIndex()) const override;
	int columnCount(const QModelIndex& parent = QModelIndex()) const override;
	QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;
	QVariant headerData(int section, Qt::Orientation orientation, int role = Qt::DisplayRole) const override;

	void addStar(Star& star);
	bool setData(const QModelIndex& index, const QVariant& value, int role = Qt::EditRole);
	Qt::ItemFlags flags(const QModelIndex& index) const;

};

