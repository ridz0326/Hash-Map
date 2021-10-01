/*
# Introduction
HashMap is a Map based collection class that is used for storing Key & value pairs, it is denoted as HashMap<Key, Value> or HashMap<K, V>. ... It is not an ordered collection which means it does not return the keys and values in the same order in which they have been inserted into the HashMap.


 Complexity Analysis 
  search : O(1)
  Insert : O(1)
  Delete : O(1)
*/
#include <unordered_map>
#include <iostream>

int main()
{
    std::unordered_map<std::string, int> age;
    // Insert
    age["Michael"] = 16;
    age.insert(std::pair<std::string, int>{"Bill", 25});
    age.insert({"Chris", 30});

    // Search and change
    age["Michael"] = 18;
    age.at("Chris") = 27;

    // Check if key exists
    std::string query;
    query = "Eric";
    if (age.find(query) == age.end())
    {
        std::cout << query << " is not in the dictionary!" << std::endl;
    }

    // Delete
    query = "Michael";
    if (age.find(query) == age.end())
    {
        std::cout << query << " is not in the dictionary!" << std::endl;
    }
    age.erase(query);
    if (age.find(query) == age.end())
    {
        std::cout << query << " is not in the dictionary!" << std::endl;
    }

    // Iterate
    for (const std::pair<std::string, int>& tup : age)
    {
        std::cout << "Name: " << tup.first << std::endl;
        std::cout << "Age: " << tup.second << std::endl;
    }
}