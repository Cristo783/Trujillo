//Cristobal Trujillo
//CSC130 Section 01

public class GameQueue {
    // stores the games inside the GameList
    private GameList games;

    // creates an empty GameList
    public GameQueue() {
        games = new GameList();
    }

    // creates a queue using an existing GameList
    public GameQueue(GameList list) {
        games = list;
    }

    // adds a game to the end of the list
    public void enqueue(Game game) {
        games.addTail(game);
    }

    // removes and returns the first game in the list
    public Game dequeue() {
        return games.removeHead();
    }

    // checks if the queue is empty
    public boolean isEmpty() {
        return games.isEmpty();
    }

    // returns all the games in the queue as a string
    @Override 
    public String toString() {
        return games.toString();
    }

}
