open System
let rec count cnt p str =
    match str with
    | head::tail when head = '=' ->
        match p with
        | 'c' | 's' | 'z' -> count cnt head tail
        | 'Z' -> count (cnt - 1) head tail
    | head::tail when head = '-' && (p = 'c' || p = 'd') -> count cnt head tail
    | head::tail when head = 'z' && p = 'd' -> count (cnt+1) 'Z' tail
    | head::tail when head = 'j' && (p = 'l' || p = 'n') -> count cnt head tail
    | head::tail -> count (cnt + 1) head tail
    | [] -> cnt
[<EntryPoint>]
let main argv =
    Console.ReadLine()
    |> Seq.toList
    |> count 0 'a'
    |> Console.Write
    0