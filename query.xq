for $maker in //Maker
    where count($maker/PC[@price <= 1000]) = count($maker/PC)
    return $maker/@name/string()