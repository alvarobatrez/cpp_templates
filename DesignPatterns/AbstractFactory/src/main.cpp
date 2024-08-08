#include <iostream>
#include <memory>

/* El patrón de diseño Abstract Factory es un patrón creacional que proporciona una interfaz para
crear familias de objetos relacionados o dependientes sin especificar sus clases concretas. Este
patrón es útil cuando un sistema debe ser independiente de cómo se crean, componen y representan
sus productos, y cuando el sistema debe configurarse con una de varias familias de productos.

Principales Componentes del Patrón Abstract Factory:
Abstract Factory: Declara una interfaz para operaciones que crean productos abstractos.
Concrete Factory: Implementa las operaciones para crear productos concretos.
Abstract Product: Declara una interfaz para un tipo de producto objeto.
Concrete Product: Implementa la interfaz de un producto abstracto.
Client: Usa interfaces declaradas por Abstract Factory y Abstract Product. */

// Abstract product A
class Chair
{
    public:

    virtual void sit_on() const = 0;
    virtual ~Chair() = default;
};

// Abstract product B
class Table
{
    public:

    virtual void dine_on() const = 0;
    virtual ~Table() = default;
};

// Concrete product A1
class VictorianChair : public Chair
{
    public:

    void sit_on() const override
    {
        std::cout << "Sitting on a Victorian Chair\n";
    }
};

// Concrete product A2
class ModernChair : public Chair
{
    public:

    void sit_on() const override
    {
        std::cout << "Sitting on a Modern Chair\n";
    }
};

// Concrete product B1
class VictorianTable : public Table
{
    public:

    void dine_on() const override
    {
        std::cout << "Dining on a Victorian Table\n";
    }
};

// Concrete product B2
class ModernTable : public Table
{
    public:

    void dine_on() const override
    {
        std::cout << "Dining on a Modern Table\n";
    }
};

// Abstract factory
class FurnitureFactory
{
    public:

    virtual std::unique_ptr<Chair> create_chair() const = 0;
    virtual std::unique_ptr<Table> create_table() const = 0;
    virtual ~FurnitureFactory() = default;
};

// Concrete factory 1
class VictorianFurnitureFactory : public FurnitureFactory
{
    std::unique_ptr<Chair> create_chair() const override
    {
        return std::make_unique<VictorianChair>();
    }

    std::unique_ptr<Table> create_table() const override
    {
        return std::make_unique<VictorianTable>();
    }
};

// Concrete factory 2
class ModernFurnitureFactory : public FurnitureFactory
{
    std::unique_ptr<Chair> create_chair() const override
    {
        return std::make_unique<ModernChair>();
    }

    std::unique_ptr<Table> create_table() const override
    {
        return std::make_unique<ModernTable>();
    }
};

// Client
void client(const FurnitureFactory &factory)
{
    auto chair = factory.create_chair();
    auto table = factory.create_table();
    chair->sit_on();
    table->dine_on();
};

int main()
{
    std::unique_ptr<FurnitureFactory> factory;

    // Use VictorianFurnitureFactory
    factory = std::make_unique<VictorianFurnitureFactory>();
    client(*factory);

    factory = std::make_unique<ModernFurnitureFactory>();
    client(*factory);

    return 0;
};