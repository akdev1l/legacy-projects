import { Injectable } from '@angular/core';
import { GithubRepo } from '../interfaces/github-repo';
import { Observable } from 'rxjs';
import { HttpClient } from '@angular/common/http';
import { map } from 'rxjs/operators';

@Injectable({
  providedIn: 'root'
})
export class GithubService {

  private readonly ApiUrl = 'https://api.github.com';
  private readonly endpoints = {
    'userRepos': `${this.ApiUrl}/users/:username/repos`,
  }
  constructor(private http: HttpClient) { }
  public listRepositoriesForUser(username: string) : Observable<GithubRepo[]> {
    const reposUrl =  this.endpoints.userRepos.replace(":username", username);
    return this.http.get<GithubRepo[]>(reposUrl);
  }
}
