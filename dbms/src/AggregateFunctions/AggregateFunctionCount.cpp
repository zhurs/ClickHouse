#include <DB/AggregateFunctions/AggregateFunctionFactory.h>
#include <DB/AggregateFunctions/AggregateFunctionCount.h>

namespace DB
{

namespace
{

AggregateFunctionPtr createAggregateFunctionCount(const std::string & name, const DataTypes & argument_types)
{
	return std::make_shared<AggregateFunctionCount>();
}

}

void registerAggregateFunctionCount(AggregateFunctionFactory & factory)
{
	factory.registerFunction({"count"}, createAggregateFunctionCount);
}

}
