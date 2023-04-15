
    for $laptop in //Laptop
        return <Laptop><Model>{$laptop/@model/string()}</Model><Maker>{$laptop/parent::node()/@name/string()}</Maker></Laptop>
