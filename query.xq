for $maker in //Maker
    where count($maker/PC[Speed/text() >= 2.0]) >= 2
    return $maker/@name/string()