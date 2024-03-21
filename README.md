# Astronomy Catalogue Application
This C++ application is designed to help astronomers catalogue stars. It allows astronomers to manage information about stars and astronomers, search for stars by name, and add new stars to the catalogue.

# Features
- Astronomer Information Loading: Upon launching the application, information about astronomers is loaded from a text file. Each astronomer has a name and the constellation they study.

- Star Catalogue Display: For each astronomer, a new window is created displaying a QTableView with data for all the stars, including their name, coordinates (RA and Dec), and diameter. This data is read from an input file.

- Adding New Stars: Astronomers can add new stars to the catalogue. The application automatically assigns the constellation studied by the astronomer to the newly added star. Adding a star fails if the name is empty, if another star with the same name already exists, or if the diameter is less than or equal to 0.

- Star Search: Astronomers can search for stars by name. The search results are displayed in a list, which updates as the astronomer types the name.

- Real-time Catalogue Update: Whenever a star is added, all astronomers will see the modified catalogue of stars. This functionality is implemented using the Qt Model/View architecture.

# Photos
- This is how it look, a window is open for every astronomer that was read from file.
  
  ![Star Catalogue 2024-03-21 at 09 45 26](https://github.com/alexiulian/ToyLanguageInterpreter/assets/115142081/b8012f47-94f6-442a-9309-5b8062f011ce)

- Now I completed the fields for a new star to be added.
![Star Catalogue 2024-03-21 at 09 46 06](https://github.com/alexiulian/ToyLanguageInterpreter/assets/115142081/c13eb16c-22dd-4a2f-835c-4785cd27fee6)

- So this is how it looked, the star was added in every window.
![Star Catalogue 2024-03-21 at 09 46 19](https://github.com/alexiulian/ToyLanguageInterpreter/assets/115142081/39771641-3b8f-4204-88a1-5ca9247d8d6a)

