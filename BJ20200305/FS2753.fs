open System
Console.ReadLine() |> int
|> fun year ->
        if (year%4)=0 then
            if (year%100)<>0 then
                1
            else if (year%400)=0 then
                1
            else 0
        else 0
|> Console.Write