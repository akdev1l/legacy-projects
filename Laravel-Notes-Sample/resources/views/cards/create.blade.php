@extends('layouts.app')

@section('title', 'Create Card...')

@section('content')
	<h1>Create Card:</h1>
	<hr />
	@include('cards._form')
@stop