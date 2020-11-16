# Graphing Calculator
  Authors: [Yiu Ming Wong](https://github.com/DexterW1), [Jasmine Ojeda](https://github.com/JasmineOjeda), [Dhruv Parmar](https://github.com/P-Dhruv20)
 
## Project Description
### Why is it important or interesting to you?
 * This project is interesting to us because we want to develop a calculator that is able to perform basic calculations including graphs, as well as functions that would be useful for college students.
### What languages/tools/technologies do you plan to use? (This list may change over the course of the project)
 * We plan to use C++ as our language of choice
 * SFML (for graph and GUI)
### What will be the input/output of your project?
 * Input: String (Character array for user inputted functions/expressions)
 * Output:
   * String (basic calculations)
   * Graph (GUI)
### What are the three design patterns you will be using. For each design pattern you must:
 * Chain of Responsibility: We chose ‘Chain of Responsibility’ because we felt that to create a reliable GUI interface we would need a set of handlers to process the information. For example, by pushing the letter i (for insert), the user will be able to input another expression while the interface is running. This allows the event to go through the chain of responsibility up until it reaches the window where the graph is displayed.
 * Strategy: We chose ‘Strategy’ because we need a design for identifying and executing operations for the basic calculations that will be implemented in the calculator. Each context refers to an arithmetic symbol, which will direct the algorithm to the desired operation that will be performed on the given operands. This design pattern would work well with the Shunting-yard algorithm, which already separates the contexts (operators) from its related operands based on the order of operations.
 * Composite: We chose the 'Composite’ because it will work hand-in-hand with our  ‘Strategy’ design pattern. This design will help match up the arithmetic symbols (the contexts for the strategies) with the needed arithmetic operation object needed for the calculation. It will help keep all the cases for the operation objects in the same place.

 ## Phase II
 ### Composite Pattern
<img src="Images/Composite.jpg" width="1000">
 * Composite Pattern will be used to incorporate operator classes to perform calculations. These classes will be responsible for the performing arithmetic, trigonometric and discrete calculations. For example, after the shunting yard algorithm has provided a precedence for the operations, different classes for the operations are used to perform the operations on the operands based on the precedence.
 
 ### Chain of Responsibility Pattern
<img src="Images/Chain.jpg" width="1000">
 * The Chain of Responsibility will be used by incorporating an SFML panel and dialog with the user’s interactions. For example, if a user presses a button on interface it will go into the class ProcessEvents and from there it will run the function request which checks different handlers. If the handler matches what the user is asking for then it will end and update based on the specific handler. If not it will be sent down to the next handler to see if it matches what the user is asking for
 
 ### Strategy Pattern
<img src="Images/Strategy.jpg" width="1000">
 * The Strategy Pattern is where the user input will be processed depending on whether they want to do a simple calculation or to graph a function. This would be determined by a prompted switch statement. If a calculation is requested, the CalculationStrategy class will break down the string expression based on the Shunting-yard algorithm. The expression will then use the Composite Pattern arithmetic classes to calculate the operands accordingly. The output would be stringified integer or double. The GraphingStrategy will also break down the string expression based on the Shunting-yard algorithm, but its output would be a visual graph created from the classes provided in the Chain of Responsibility pattern.
 
 > ## Phase III
 > You will need to schedule a check-in with the TA (during lab hours or office hours). Your entire team must be present. 
 > * Before the meeting you should perform a sprint plan like you did in Phase II
 > * In the meeting with your TA you will discuss: 
 >   - How effective your last sprint was (each member should talk about what they did)
 >   - Any tasks that did not get completed last sprint, and how you took them into consideration for this sprint
 >   - Any bugs you've identified and created issues for during the sprint. Do you plan on fixing them in the next sprint or are they lower priority?
 >   - What tasks you are planning for this next sprint.

 > ## Final deliverable
 > All group members will give a demo to the TA during lab time. The TA will check the demo and the project GitHub repository and ask a few questions to all the team members. 
 > Before the demo, you should do the following:
 > * Complete the sections below (i.e. Screenshots, Installation/Usage, Testing)
 > * Plan one more sprint (that you will not necessarily complete before the end of the quarter). Your In-progress and In-testing columns should be empty (you are not doing more work currently) but your TODO column should have a full sprint plan in it as you have done before. This should include any known bugs (there should be some) or new features you would like to add. These should appear as issues/cards on your Kanban board. 
 ## Screenshots
 > Screenshots of the input/output after running your application
 ## Installation/Usage
 > Instructions on installing and running your application
 ## Testing
 > How was your project tested/validated? If you used CI, you should have a "build passing" badge in this README.
 
