@if(!isset($card))
<form action="{{ action('CardsController@store') }}" method="POST" class="form-group">
@else
<form action="{{ action('CardsController@update', ['card' => $card]) }}" method="POST" class="form-group">
	<input type="hidden" name="_method" value="PUT" class="form-group-item"/>
@endif
	{{ csrf_field() }}
	<label for="title">Title:</label>
	<input type="text" name="title" value="{{ old('title', isset($card->title) ? $card->title : null) }}" class="form-group-item"/>
	<br />
	<br />
@if(!isset($card))
	<input type="submit" value="Create"/>
@else
	<input type="submit" value="Edit">
@endif
</form>