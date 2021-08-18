#include <iostream> 
#include <list>



class YouTubeChannel {
public:
	std::string Name;
	std::string OwnerName;
	int SubscriberCount;
	std::list<std::string> PublishedVideoTitle;
};

class VideoGames {
public:
	std::string Name;
	std::string Type;
	int Price;
	std::list<std::string> Characters;
};


int main() {
	YouTubeChannel ytChannel;
	ytChannel.Name = "\tThe firvin";
	ytChannel.OwnerName = "\tfernando irvin";
	ytChannel.SubscriberCount = 50000;
	ytChannel.PublishedVideoTitle = { "\tRE 4 GAMEPLAY", "\tRE VILLAGE GAMEPLAY", "\tDEADSPACE 1" };
	
	VideoGames devGames;
	devGames.Name = "\tResident Evil 4";
	devGames.Type = "\tHorror and Survival";
	devGames.Price = 60;
	devGames.Characters = { "\tLeon S. Kennedy", "\tAshey", "\tAda wong" };

	std::cout << "Name:\n" << ytChannel.Name << std::endl;
	std::cout << "Owner name:\n" << ytChannel.OwnerName << std::endl;
	std::cout << "Number of subcribers:\n\t" << ytChannel.SubscriberCount << std::endl;
	std::cout << "Name of the videos:" << std::endl;
	for (std::string videoTitle : ytChannel.PublishedVideoTitle) {
		std::cout << videoTitle << std::endl;
	}

	std::cout << "\n\nName of Videogame:\n" << devGames.Name << std::endl;
	std::cout << "Type:\n" << devGames.Type << std::endl;
	std::cout << "Price:\n\t" << devGames.Price << std::endl;
	std::cout << "Characters in game:" << std::endl;
	for (std::string gameTitle : devGames.Characters) {
		std::cout << gameTitle << std::endl;
	}
	system("pause>0");
}