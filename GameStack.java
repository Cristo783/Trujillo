//Cristobal Trujillo
//CSC130 Section 01

public class GameStack {
    // stores the games inside a GameList
    private GameList games;

    // creates an empty GameList
    public GameStack() {
        games = new GameList();
    }

    // creates a stack using an existing GameList
    public GameStack(GameList list) {
        games = list;
    }

    // adds a game to the head of the list
    public void push(Game game) {
        games.addHead(game);
    }

    // removes and returns the game at the head of the list
    public Game pop() {
        return games.removeHead();
    }

    // checks if the stack is empty
    public boolean isEmpty() {
        return games.isEmpty();
    }

    // returns all the games in the stack as a string
    @Override
    public String toString() {
        return games.toString();
    }
}