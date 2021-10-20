import { Component, OnInit } from '@angular/core';
import { HttpClient } from '@angular/common/http';
import { GithubService } from '../shared/services/github.service';
import { GithubRepo } from '../shared/interfaces/github-repo';
import { faStar } from '@fortawesome/free-solid-svg-icons';

@Component({
  selector: 'app-main',
  templateUrl: './repos.component.html',
  styleUrls: ['./repos.component.scss']
})
export class ReposComponent implements OnInit {

  constructor(private githubService: GithubService) { }
  private repositories: GithubRepo[];
  private readonly faStar = faStar;

  ngOnInit() {
    let c: string;
    this.githubService.listRepositoriesForUser("e4lejandr0").subscribe(repos => {
      this.repositories = repos.sort((a: GithubRepo, b: GithubRepo) => {
        return b.stargazers_count  - a.stargazers_count;
      });
    });
  }

}
