{
  "targets": [
    {
      "target_name": "example-addon",
      "sources": [
        "addons/main.cpp"
      ],
      "include_dirs": [
        "<!(node -e \"require('nan')\")"
      ]
    }
  ]
}
