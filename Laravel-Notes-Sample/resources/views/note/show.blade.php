@extends('layouts.app')

@section('title')
	{{ $card->title }} - {{ $note->title }}
@stop

@section('content')
	<h1>{{ $note->title }}</h1>
	<hr />

	<p>
		{{ $note->body }}
	</p>

	<a href="{{ action('NotesController@edit', ['card' => $card, 'note' => $note]) }}">
		<button class="btn btn-primary">Edit</button>
	</a>

@stop