open System
let count (l:int List) =
    let rec subcount (cnt:int) li =
        match li with
            | head::tail -> 
                try
                    List.find (fun x -> x = head) tail |> ignore
                    subcount cnt tail
                with
                    | _ -> subcount (cnt + 1) tail
            | [] -> cnt
    subcount 0 l
[<EntryPoint>]
let main argv =
    [for _ in 1 .. 10 do yield ((Console.ReadLine() |> int) % 42)]
    |> List.map int
    |> count
    |> Console.Write
    0