#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

class Warlock
{
    private:
    std::string name;
    std::string title;
   
    Warlock (void);
    Warlock (const Warlock &x);
    Warlock &operator=(const Warlock &x);

    public:
    const std::string &getName(void) const;
    const std::string &getTitle(void) const;

    void    setTitle(const std::string &t);

    Warlock (const std::string &name, const std::string &title);
    ~Warlock(void);

    void introduce(void) const;

};

#endif