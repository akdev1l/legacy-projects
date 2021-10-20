import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-sidebar',
  templateUrl: './sidebar.component.html',
  styleUrls: ['./sidebar.component.scss']
})
export class SidebarComponent implements OnInit {

  private readonly avatarUrl = "https://instagram.fybz1-1.fna.fbcdn.net/vp/765122cd3e8660c4ca1d262efe26a777/5BF38959/t51.2885-15/sh0.08/e35/s640x640/18380877_1800888553561265_703747584203685888_n.jpg";

  private readonly languageLevels = {
    0: 'Beginner',
    1: 'Intermediate',
    2: 'Intermediate-Advanced',
    3: 'Advanced'
  };

  private readonly languages = [
    {
      "name": "C",
      "level": 3,
    },
    {
      "name": "C++",
      "level": 3,
    },
    {
      "name": "Java",
      "level": 2,
    },
    {
      "name": "Bash/Zsh/Sh",
      "level": 3,
    },
    {
      "name": "Python",
      "level": 2,
    },
  ].sort((a, b) => b.level - a.level);

  constructor() { }

  ngOnInit() {
  }

}
