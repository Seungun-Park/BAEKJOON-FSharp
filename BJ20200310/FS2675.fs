open System
let makeStr (str:String) =
    let arr = str.Split ' ' |> Array.map string
    let rec substr x cnt l =
        match l with
        | head::tail when cnt < x -> string(head) + substr x (cnt+1) l
        | head::tail when cnt = x -> string(head) + substr x 1 tail
        | [] -> ""
    substr (arr.[0] |> int) 1 (arr.[1] |> Seq.toList)
[<EntryPoint>]
let main argv =
    [for _ in 1 .. int(Console.ReadLine()) do yield Console.ReadLine() |> makeStr]
    |> List.map string
    |> String.concat "\n"
    |> Console.Write
    0