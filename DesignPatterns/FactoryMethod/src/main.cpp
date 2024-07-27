#include <iostream>
#include <memory>

/* El patrón de diseño Factory Method es un patrón creacional que proporciona una interfaz
para crear objetos en una superclase, pero permite a las subclases alterar el tipo de objetos 
que se crearán. Este patrón permite que una clase delegue la responsabilidad de la creación
de instancias a las subclases. Es útil cuando una clase no puede anticipar el tipo de objetos
que debe crear.

Principales Componentes del Patrón Factory Method:
Producto: Define la interfaz de los objetos que el método fábrica crea.
Creador: Declara el método fábrica, el cual retorna un objeto del tipo producto. Puede también
implementar un método por defecto que utiliza el método fábrica para crear un objeto producto.
Producto Concreto: Implementa la interfaz del producto.
Creador Concreto: Sobrescribe el método fábrica para retornar una instancia de un producto concreto. */

// Product
class Transport
{
    public:

    virtual void deliver() const = 0;
    virtual ~Transport() = default;
};

// Concrete product 1
class Truck : public Transport
{
    public:

    void deliver() const override
    {
        std::cout << "Deliver by land in a box\n";
    }
};

// Concrete product 2
class Ship : public Transport
{
    public:

    void deliver() const override
    {
        std::cout << "Deliver by sea in a container\n";
    }
};

// Creator
class Logistics
{
    public:

    virtual std::unique_ptr<Transport> create_transport() const = 0;
    virtual ~Logistics() = default;

    void plan_delivery() const
    {
        auto transport = create_transport();
        transport->deliver();
    }
};

// Concrete creator 1
class RoadLogistics : public Logistics
{
    public:

    std::unique_ptr<Transport> create_transport() const override
    {
        return std::make_unique<Truck>();
    }
};

// Concrete creator 2
class SeaLogistics : public Logistics
{
    public:

    std::unique_ptr<Transport> create_transport() const override
    {
        return std::make_unique<Ship>();
    }
};

// Client
int main()
{
    std::unique_ptr<Logistics> logistics;

    // Use RoadLogistics
    logistics = std::make_unique<RoadLogistics>();
    logistics->plan_delivery();

    // Use SeaLogistics
    logistics = std::make_unique<SeaLogistics>();
    logistics->plan_delivery();
    
    return 0;
};