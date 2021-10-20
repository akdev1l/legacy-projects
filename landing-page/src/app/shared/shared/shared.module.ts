import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { MaterialModule } from '../material/material.module';
import { FlexLayoutModule } from '@angular/flex-layout';
import { HttpClientModule } from '@angular/common/http';
import { FontAwesomeModule } from '@fortawesome/angular-fontawesome';

@NgModule({
  imports: [
    CommonModule,
    MaterialModule,
    FlexLayoutModule,
    HttpClientModule,
    FontAwesomeModule,
  ],
  exports: [
    MaterialModule,
    FlexLayoutModule,
    FontAwesomeModule,
    HttpClientModule,
  ],
  declarations: []
})
export class SharedModule { }
