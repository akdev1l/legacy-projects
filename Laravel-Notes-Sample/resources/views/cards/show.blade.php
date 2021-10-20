@extends('layouts.app')

@section('title')
	Card - {{ $card->title }}
@stop

@section('content')

	<h1>{{ $card->title }}</h1>
	<hr />

	<ul class="list-group">
		@foreach($card->notes as $note)
			<li class="list-group-item">
				<a href="{{ action('NotesController@show', ['card' => $card->id, 'note' => $note]) }}">
					{{ $note->title }}
				</a>
			</li>
		@endforeach
	</ul>
	<hr />
	<a href="{{ action('NotesController@create', ['card' => $card->id]) }}">
		<button class="btn btn-primary">
			Create Note
		</button>
	</a>
	
@stop