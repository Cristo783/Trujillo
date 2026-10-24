//Cristobal Trujillo
//CSC130 Section 01

public class Game {
    // stores information about a game
    private int ID;
    private String name;
    private Category category;
    private Platform platform;
    private int rating;
    private int cost;

    // game categories
    public enum Category {
        ACTION,
        ADVENTURE,
        FIGHTING,
        PLATFORM,
        RPG,
        PUZZLE,
        SPORTS,
        OTHER;
    }

    // game platforms
    public enum Platform {
        ARCADE,
        ATARI_2600,
        DOS,
        COMMODORE_64,
        APPLE_2,
        NES,
        SUPER_NINTENDO,
        NINTENDO_64,
        PLAYSTATION,
        PLAYSTATION_2,
        PLAYSTATION_3,
        PLAYSTATION_4,
        PLAYSTATION_5,
        XBOX,
        XBOX_360,
        XBOX_ONE,
        XBOX_X,
        OTHER;
    }

    // gives a game its information
    public Game(int ID, String name, Category category, Platform platform, int rating, int cost) {
        this.ID = ID;
        this.name = name;
        this.category = category;
        this.platform = platform;
        this.rating = rating;
        this.cost = cost;
    }

    public int getID() {
        return ID;
    }

    public String getName() {
        return name;
    }

    public Category getCategory() {
        return category;
    }

    public Platform getPlatform() {
        return platform;
    }

    public int getRating() {
        return rating;
    }

    public int getCost() {
        return cost;
    }
    // converts the category into a string 
    private String toName(Category category) {
        String categoryName;
        // checks what category its set to be 
        switch (category) {
            case ACTION:
                categoryName = "action";
                break;
            case ADVENTURE:
                categoryName = "adventure";
                break;
            case FIGHTING:
                categoryName = "fighting";
                break;
            case PLATFORM:
                categoryName = "platform";
                break;
            case RPG:
                categoryName = "rpg";
                break;
            case PUZZLE:
                categoryName = "puzzle";
                break;
            case SPORTS:
                categoryName = "sports";
                break;
            case OTHER:
                categoryName = "other";
                break;
            default: 
                System.out.println("No category");
                categoryName = "unknown";
                break;
        }
        return categoryName;
    }
    // converts the platform into a string
    private String toName(Platform platform) {
        String platformName;
        // checks what platform its set to be 
        switch (platform) {
            case ARCADE:
                platformName = "Arcade";
                break;
            case ATARI_2600:
                platformName = "Atari 2600";
                break;
            case DOS:
                platformName = "DOS";
                break;
            case COMMODORE_64:
                platformName = "Commodore 64";
                break;
            case APPLE_2:
                platformName = "Apple II";
                break;
            case NES:
                platformName = "NES";
                break;
            case SUPER_NINTENDO:
                platformName = "Super Nintendo";
                break;
            case NINTENDO_64:
                platformName = "Nintendo 64";
                break;
            case PLAYSTATION:
                platformName = "PlayStation";
                break;
            case PLAYSTATION_2:
                platformName = "PlayStation 2";
                break;
            case PLAYSTATION_3:
                platformName = "PlayStation 3";
                break;
            case PLAYSTATION_4:
                platformName = "PlayStation 4";
                break;
            case PLAYSTATION_5:
                platformName = "PlayStation 5";
                break;
            case XBOX:
                platformName = "Xbox";
                break;
            case XBOX_360:
                platformName = "Xbox 360";
                break;
            case XBOX_ONE:
                platformName = "Xbox One";
                break;
            case XBOX_X:
                platformName = "Xbox X";
                break;
            case OTHER:
                platformName = "Other";
                break;
            default: 
                System.out.println("No platform");
                platformName = "unknown";
                break;
        }
        return platformName;
    }
    // puts the name and platform together 
    public String nickname() {
        return name + " (" + toName(platform) + ")";
    }
    //  puts the name and info together 
    public String description() {
        return name + ", on the " + toName(platform) + ", is a " + rating + " star " + toName(category) + " game that costs $" + cost + ".";
    }
    // Overrides the toString() method to return nickname()
    @Override
    public String toString() {
        return nickname();
    }
}