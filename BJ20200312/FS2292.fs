open System
let honeycomb t =
    let rec count target ans x =
        let tmp = 6 * ans + x
        if tmp >= target then
            ans + 1
        else
            count target (ans + 1) tmp
    count t 0 1
[<EntryPoint>]
let main argv = 
    Console.ReadLine() |> int |> honeycomb |> Console.Write
    0
