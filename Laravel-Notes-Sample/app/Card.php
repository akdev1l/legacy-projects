<?php

namespace App;

use Illuminate\Database\Eloquent\Model;

class Card extends Model
{
    protected $fillable = ['title'];

    public function user() {
    	return $this->belongsTo(User::class);
    }

    public function notes() {
    	return $this->hasMany(Note::class);
    }
}
