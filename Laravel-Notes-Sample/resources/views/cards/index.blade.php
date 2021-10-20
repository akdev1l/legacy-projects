@extends('layouts.app')

@section('title', 'Cards')

@section('content')
	<h1>Cards:</h1>
	<hr />
	<ul class="list-group"'>
		@foreach($cards as $card)
			<li class="list-group-item">
				<a href="{{ action('CardsController@show', ['card' => $card]) }}">
					{{ $card->title }}
				</a>
				<a href="{{ action('CardsController@edit', ['card' => $card]) }}" class="pull-right">
					Edit
				</a>
			</li>
		</form>
		@endforeach
	</ul>

	<a href="{{ action('CardsController@create') }}"><button>Create Card</button></a>

@stop