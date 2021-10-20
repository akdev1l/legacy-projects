@extends('layouts.app')

@section('title')
	Create note for {{ $card->title }}
@stop

@section('content')
	<h1>Create Note:</h1>
	<hr>
	<form action="{{ action('NotesController@store', $card) }}" class="form-group" method="POST">
		{{ csrf_field() }}
		<label for="title">Title:</label>
		<input type="text" class="form-control" name="title" />
		<label for="body">Body:</label><br />
		<textarea name="body" class="form-control"></textarea>
		<br />
		<input type="submit">
	</form>
@stop