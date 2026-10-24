//Cristobal Trujillo
//CSC130 Section 01

public class GameList {

    private class Node {
        Node next;
        Game value;
        // calls the second constructor to set the game and next to null
        Node(Game game) {
            this(game, null);
        }
        // makes a node connected to another node
        Node(Game game, Node nextNode) {
            this.value = game;
            this.next = nextNode;
        }
    }

    private Node head;
    private Node tail;
    
    public GameList() {
        head = null;
        tail = null;
    }

    public String about() {
        return "Cristobal Trujillo CSC130";
    }

    public void addHead(Game game) {
        Node newNode = new Node(game);
        // checks if the list is empty
        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            // connects the new node to the old head
            newNode.next = head;
            head = newNode;
        }
    }

    public void addTail(Game game) {
        Node newNode = new Node(game);
        // checks if the list is empty
        if (isEmpty()) {
            head = newNode;
            tail = newNode;
        } else {
            // connects the old tail to the new node 
            tail.next = newNode;
            tail = newNode;
        }
    }

    public boolean isEmpty() {
        return head == null;
    }

    public Game removeHead() {
        Game result;
        // checks if the list is empty
        if (isEmpty()) { 
            result = null;
        }
        // checks if theres only one node 
        else if (head == tail) {
            result = head.value;
            head = null;
            tail = null;
        } else {
            // saves the game and moves head to the next node
            result = head.value;
            head = head.next;
        }
        return result;
    }

    public Game find(int ID) {
        Node current = head;
        // goes through the list looking for the wanted ID 
        while (current != null) {
            // checks if ID matches
            if (current.value.getID() == ID) {
                return current.value;
            }
            current = current.next;
        }
        return null;
    }

    public GameList sublist(Game.Category category) {
        GameList result = new GameList();
        Node current = head;
        // goes through the game list checking categories
        while (current != null) {
            // adds games that match the category 
            if (current.value.getCategory() == category) {
                result.addTail(current.value);
            }
            current = current.next;
        }
        return result;
    }

    public GameList sublist(Game.Platform platform) {
        GameList result = new GameList();
        Node current = head;
        // goes through the list checking the platform
        while (current != null) {
            // adds games that match the platform
            if (current.value.getPlatform() == platform) {
                result.addTail(current.value);
            }
            current = current.next;
        }
        return result;
    }
    
    @Override
    public String toString() {
        StringBuilder result = new StringBuilder();
        Node current = head;
        // goes through the games list to collect descriptions
        while (current != null) {
            result.append(current.value.description());
            // adds a new line if theres another game
            if (current.next != null) {
                result.append("\n");
            }
            current = current.next;
        }
        return result.toString();
    }
    
}

