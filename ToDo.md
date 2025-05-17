# To-Do List for Tic-Tac-Toe Game

- [ ] **Fix `checkWiner()` function:**
  - Implement a function to check the winning condition (horizontal, vertical, and diagonal) and declare the winner.
   
- [ ] **Fix `move()` Function:**
  - Ensure that the `move()` function properly updates the board for both the player and the AI.
  - The current AI is just using a fixed index; implement a smarter move for the AI (e.g., using a simple strategy or Minimax algorithm).
   
- [ ] **Fix Input Validation:**
  - Improve input validation logic to avoid repeated input prompts when the player enters invalid data.
   
- [ ] **Implement AI Strategy (if applicable):**
  - Implement an AI strategy for the computer's turn. Currently, the AI is just selecting a fixed index, which makes the game not challenging.
   
- [ ] **Optimize `clearInput()` Function:**
  - Ensure that `clearInput()` works efficiently for flushing unwanted input in case of invalid moves.
   
- [ ] **Add Win Detection and Announcement:**
  - Check the board for a win condition after every move and announce the winner (Player X, Player O, or a Draw).

- [ ] **Handle Draws:**
  - Add a check for a draw condition (i.e., when all cells are filled and no player wins).
   
- [ ] **Refine the Game Loop:**
  - Modify the game loop to stop when a player wins or a draw occurs instead of continuing for all 9 turns.
   
- [ ] **Add Comments/Documentation:**
  - Add comments and documentation to explain the purpose of each function and key parts of the code.

- [ ] **Test and Debug:**
  - Run multiple test cases to ensure that all conditions (valid input, invalid input, win, draw, AI logic) are handled correctly.
