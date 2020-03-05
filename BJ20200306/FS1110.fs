open System
let mutable x = 0

let proces (n:int) =
    let mutable count = 1
    if n < 10 then
        x <- n * 10 + n
    else
        x <- (n % 10) * 10 + ((n / 10) + (n % 10)) % 10
    while x <> n do
        x <- (x % 10) * 10 + ((x / 10) + (x % 10)) % 10
        count <- count + 1
    count

[<EntryPoint>]
let main argv =
    let n = Console.ReadLine() |> int
    Console.Write (proces n)
    0