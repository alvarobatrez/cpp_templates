#include <iostream>
#include <map>
#include <set>
#include <algorithm>

template <typename T1, typename T2>
void display(const std::map<T1, std::set<T2>> &m)
{
    std::cout << "[ ";
    for (const auto &element: m)
    {
        std::cout << element.first << ": [ ";
        for (const auto &set_element: element.second)
        {
            std::cout << set_element << " ";
        }
        std::cout << "] ";
    }
    std::cout << "]\n";
}

template <typename T1, typename T2>
void display(const std::map<T1, T2> & list)
{
    std::cout << "[ ";
    std::for_each(list.begin(), list.end(), [](auto x) { std::cout << x.first << ":" << x.second << " "; });
    std::cout << "]\n";
}

int main()
{
    // ***** MAPS *****

    std::map<std::string, int> m {{"Alvaro", 36}, {"Berencie", 31}, {"Carlos", 26}};
    display(m);

    m.insert(std::pair<std::string, int>("Daniela", 21));
    display(m);

    m.insert(std::make_pair("Eugenia", 40));
    display(m);

    m["Francisco"] = 18;
    display(m);

    m["Francisco"]++;
    display(m);

    m.erase("Francisco");
    display(m);

    std::cout << "Alvaro was found " << m.count("Alvaro") << " times\n";
    std::cout << "Francisco was found " << m.count("Francisco") << " times\n";

    auto it = m.find("Carlos");
    if (it != m.end())
    {
        std::cout << "Found: " << it->first << ":" << it->second << std::endl;
    }

    m.clear();

    display(m);

    std::cout << std::endl;

    // ***** INSERT - FIND *****

    std::map<std::string, std::set<double>> grades
    {
        {"Alvaro", {10.0, 9.5}},
        {"Berenice", {8.0, 8.0}},
        {"Carlos", {9.5, 8.0, 10.0}}
    };
    display(grades);

    grades["Daniela"].insert(9.5);
    display(grades);

    auto i = grades.find("Carlos");
    if (i != grades.end())
    {
        i->second.insert(7.0);
    }
    display(grades);
    
    return 0;
}