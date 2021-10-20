export interface GithubRepo {
    name: string,
    language: string,
    watchers: number,
    stargazers_count: number,
    created_at: Date,
    pushed_at: Date,
    description: string,
    url: string,
    html_url: string
}
