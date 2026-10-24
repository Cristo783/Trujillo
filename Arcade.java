//Cristobal Trujillo
//CSC130 Section 01

public class Arcade {
    // stores all the games and the games being played in the tournament
    private GameList games;
    private GameQueue startQueue;

    // creates an empty game list
    // sets startQueue to null because no tournament has started
    public Arcade() {
        games = new GameList();
        startQueue = null;
    }

    // adds a game to the end of the game list
    public void add(Game game) {
        games.addTail(game);

    }

    // returns all the games in the arcade as a string
    public String toString() {
        return games.toString();
    }
    
    // starts a tournament using games from a certain platform
    public void start(Game.Platform platform) {
        // makes a new list with only games that match the platform
        GameList selectedGames = games.sublist(platform);
        // puts the games into a queue
        startQueue = new GameQueue(selectedGames);
    }

    // starts a tournament using games from a certain category
    public void start(Game.Category category) {
        // makes a new list with only games from that category
        GameList selectedGames = games.sublist(category);
        // puts them in a queue
        startQueue = new GameQueue(selectedGames);
    }

    // gets the next game from the tournament
    public Game playNext() {
        //checks if theres no games left to play
        if (donePlaying()) {
            // if no games then null
            return null;
        }
        // removes and returns the next game from the queue
        return startQueue.dequeue();
    }
    
    // checks if the tournament is done playing
    public boolean donePlaying() {
        // returns true if a tournament hasnt started or the queue is empty
        return startQueue == null || startQueue.isEmpty();
    }
}
