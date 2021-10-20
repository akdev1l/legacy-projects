import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-toolbar',
  templateUrl: './toolbar.component.html',
  styleUrls: ['./toolbar.component.scss']
})
export class ToolbarComponent implements OnInit {

  private readonly menuItems = [
    {
      'title': 'Home',
      'url': '/'
    },
    {
      'title': 'Repositories',
      'url': '/repos'
    },
    {
      'title': 'About Me',
      'url': '/about'
    },
  ]

  constructor() { }

  ngOnInit() {
  }

}
