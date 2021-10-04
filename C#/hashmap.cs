/*
# Introduction
HashMap is a Map based collection class that is used for storing Key & value pairs, it is denoted as HashMap<Key, Value> or HashMap<K, V>. ... It is not an ordered collection which means it does not return the keys and values in the same order in which they have been inserted into the HashMap.


 Complexity Analysis 
  search : O(1)
  Insert : O(1)
  Delete : O(1)
*/

using System;
using System.Collections.Generic;

class Program
{
    static void Main()
    {
        // Create Dictionary.
        Dictionary<string, int> hash = new Dictionary<string, int>();
        
        // Add some data.
        hash.Add("diamond", 500);
        hash.Add("ruby", 200);
        hash.Add("pearl", 100);
        
        // Get value that exists.
        int value1 = hash["diamond"];
        Console.WriteLine("get DIAMOND: " + value1);
        
        // Get value that does not exist.
        hash.TryGetValue("coal", out int value2);
        Console.WriteLine("get COAL: " + value2);
        
        // Loop over items in collection.
        foreach (KeyValuePair<string, int> pair in hash)
        {
            Console.WriteLine("KEY: " + pair.Key);
            Console.WriteLine("VALUE: " + pair.Value);
        }
    }
}