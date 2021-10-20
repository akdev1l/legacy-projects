import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import {
          MatToolbarModule,
          MatCardModule,
          MatGridListModule,
          MatListModule,
          MatButtonModule,
} from '@angular/material';

@NgModule({
  imports: [
    CommonModule,
    MatToolbarModule,
    MatGridListModule,
    MatListModule,
    MatCardModule,
    MatButtonModule,
  ],
  exports: [
    MatToolbarModule,
    MatGridListModule,
    MatListModule,
    MatButtonModule,
    MatCardModule,
  ],
  declarations: []
})
export class MaterialModule { }
