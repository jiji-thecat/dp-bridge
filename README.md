# Design Pattern - Bridge Pattern

## Description

![bridge](https://github.com/jiji-thecat/dp-bridge/assets/104809324/d68b2229-1fba-43e6-8131-ef765fd62194)

The Bridge pattern is a design pattern that allows you to expand classes by using a bridge class. You can also use the Bridge pattern when it is:

- Difficult to add classes.
- Necessary to reduce code duplication.

### Class Diagram

![class diagram](https://github.com/jiji-thecat/dp-bridge/assets/104809324/06b74cba-e19b-40f9-8733-4da43fb77362)
[Wikipedia](https://ja.wikipedia.org/wiki/Bridge_%E3%83%91%E3%82%BF%E3%83%BC%E3%83%B3)

The line between the Abstraction class and the Implementor class represents the bridge. The Abstraction class represents the functions, and the Implementor class represents the implementation. If you want to add functions, update the Abstraction class. If you want to add implementations, update the Implementor class.

## How to Install and Run

Import this project as a Qt project.

## How to Use This App

![bridge](https://github.com/jiji-thecat/dp-bridge/assets/104809324/d68b2229-1fba-43e6-8131-ef765fd62194)

This app demonstrates how cats and dogs cry in Kanto-style and Kansai-style. The Kanto-style and Kansai-style cries are implemented in the Abstraction class, while the Dog and Cat classes are implemented in the Implementor class. When a button is pressed, the cry is displayed in Japanese.

## License

**MIT License**

Copyright © 2024 jiji

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation, the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

\*\*THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
