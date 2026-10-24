//Cristobal Trujillo 
//CSC130 Section 01

public class Tester {
    public static void main(String[] args) {
        // creates 15 instances of the game class
        Game[] games = {
            new Game(1, "Pac-Man", Game.Category.ACTION, Game.Platform.ARCADE, 4, 1),
            new Game(2, "Frogger", Game.Category.ACTION, Game.Platform.ATARI_2600, 2, 35),
            new Game(3, "Fallout", Game.Category.RPG, Game.Platform.DOS, 4, 50),
            new Game(4, "Gunship", Game.Category.OTHER, Game.Platform.COMMODORE_64, 3, 25),
            new Game(5, "Dig Dug", Game.Category.ACTION, Game.Platform.APPLE_2, 1, 35),
            new Game(6, "Tony Hawk's Pro Skater 2", Game.Category.SPORTS, Game.Platform.NINTENDO_64, 3, 50),
            new Game(7, "Grand Theft Auto: Vice City", Game.Category.ACTION, Game.Platform.PLAYSTATION_2, 4, 50),
            new Game(8, "Bioshock", Game.Category.ACTION, Game.Platform.XBOX_360, 4, 60),
            new Game(9, "Elden Ring", Game.Category.RPG, Game.Platform.PLAYSTATION_5, 4, 60),
            new Game(10, "Tetris", Game.Category.PUZZLE, Game.Platform.NES, 4, 35),
            new Game(11, "Gran Turismo", Game.Category.OTHER, Game.Platform.PLAYSTATION, 4, 40), 
            new Game(12, "Red Dead Redemption", Game.Category.ACTION, Game.Platform.PLAYSTATION_3, 2, 60),
            new Game(13, "Diablo IV", Game.Category.RPG, Game.Platform.XBOX_X, 4, 70),
            new Game(14, "Street Fighter II", Game.Category.ACTION, Game.Platform.SUPER_NINTENDO, 4, 75),
            new Game(15, "Super Mario 64", Game.Category.ACTION, Game.Platform.NINTENDO_64, 4, 60),
        };

        GameList list1 = new GameList();
        GameList list2 = new GameList();

        System.out.println("\nAuthor: " + list1.about());
        System.out.println("\nList 1 empty: " + list1.isEmpty());

        // adds the first 10 games to the tail of list 1
        for (int i = 0; i < 10; i++) {
            list1.addTail(games[i]);
        }

        // adds the other five games to the head of list 2
        for (int i = 10; i < games.length; i++) {
            list2.addHead(games[i]);
        }

        // prints both game lists
        System.out.println("\nList 1: ");
        System.out.println(list1.toString());

        System.out.println("\nList 2: ");
        System.out.println(list2.toString());

        // removes the first game from each list
        System.out.println("\nRemoved from list 1: " + list1.removeHead());
        System.out.println(list1.toString());

        System.out.println("\nRemoved from list 2: " + list2.removeHead());
        System.out.println(list2.toString());

        // finds the game with the ID 3 in list 1
        System.out.println("\nFind ID 3 (Fallout): ");
        System.out.println(list1.find(3));

        // checks for a game that doesn't exist
        System.out.println("\nFind ID 99: ");
        System.out.println(list1.find(99));

        // makes a new list containing only Action games
        GameList actionGames = list1.sublist(Game.Category.ACTION);
        System.out.println("\nAction games: ");
        System.out.println(actionGames.toString());

        // checks that list 1 did not change after filtering
        System.out.println("\nOriginal list 1 after category filtering: ");
        System.out.println(list1.toString());

        // makes a new list containing PS3 games
        GameList playstationGame = list2.sublist(Game.Platform.PLAYSTATION_3);
        System.out.println("\nPlaystation 3 games: ");
        System.out.println(playstationGame.toString());

        // checks that list 2 did not change after filtering
        System.out.println("\nOriginal list 2 after platform filtering: ");
        System.out.println(list2.toString());

        // tests removing a game from an empty list
        GameList emptyList = new GameList();
        System.out.println("\nRemove from empty list: ");
        System.out.println(emptyList.removeHead());

        // tests removing the only game in a list
        emptyList.addHead(games[0]);
        System.out.println("\nRemoved this game: ");
        System.out.println(emptyList.removeHead());

        System.out.println("\nEmpty after removing only game: " + emptyList.isEmpty());

    }
} 