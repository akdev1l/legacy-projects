import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import { RouterModule, Router, Routes } from '@angular/router';

import { AppComponent } from './app.component';
import { SharedModule } from './shared/shared/shared.module';
import { ToolbarComponent } from './toolbar/toolbar.component';
import { ReposComponent } from './repos/repos.component';
import { FooterComponent } from './footer/footer.component';
import { SidebarComponent } from './repos/sidebar/sidebar.component';

const routes: Routes = [
  {
    path: '',
    component: ReposComponent
  },
  {
    path: 'repos',
    component: ReposComponent
  }
]

@NgModule({
  declarations: [
    AppComponent,
    ToolbarComponent,
    ReposComponent,
    FooterComponent,
    SidebarComponent
  ],
  imports: [
    BrowserModule,
    SharedModule,
    RouterModule.forRoot(routes),
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
