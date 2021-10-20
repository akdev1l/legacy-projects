@extends('layouts.app')

@section('title', 'Create Card')

@section('content')
	<h1>{{ $card->title }}</h1>
	<hr />
	@include('cards._form')

	<form action="{{ action('CardsController@destroy', ['card' => $card]) }}" method="POST" class="pull-right">
		<input type="hidden" name="_method" value="DELETE" />
		{{ csrf_field() }}
		<input type="submit" value="Delete" class="btn btn-primary" />
	</form>
@stop