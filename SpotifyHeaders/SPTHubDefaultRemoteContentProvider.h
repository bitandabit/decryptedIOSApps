//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTDataLoaderDelegate.h"
#import "SPTHubRemoteContentProvider.h"

@class NSString, SPTDataLoader;

@interface SPTHubDefaultRemoteContentProvider : NSObject <SPTDataLoaderDelegate, SPTHubRemoteContentProvider>
{
    id <SPTHubRemoteContentProviderDelegate> _delegate;
    SPTDataLoader *_dataLoader;
    id <SPTHubRemoteContentURLResolver> _URLResolver;
    id <SPTDataLoaderCancellationToken> _currentRequestCancellationToken;
}

@property(retain, nonatomic) id <SPTDataLoaderCancellationToken> currentRequestCancellationToken; // @synthesize currentRequestCancellationToken=_currentRequestCancellationToken;
@property(retain, nonatomic) id <SPTHubRemoteContentURLResolver> URLResolver; // @synthesize URLResolver=_URLResolver;
@property(readonly, nonatomic) SPTDataLoader *dataLoader; // @synthesize dataLoader=_dataLoader;
@property(nonatomic) __weak id <SPTHubRemoteContentProviderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)loadContentFromURL:(id)arg1 forViewURI:(id)arg2;
- (void)cancelCurrentRequest:(_Bool)arg1;
- (void)dataLoader:(id)arg1 didCancelRequest:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveErrorResponse:(id)arg2;
- (void)dataLoader:(id)arg1 didReceiveSuccessfulResponse:(id)arg2;
- (void)cancelAllHubRemoteContentOperationsForReload:(_Bool)arg1;
- (void)loadHubRemoteContentFromEndpointPath:(id)arg1 forExternalData:(_Bool)arg2;
- (void)loadHubRemoteContentForViewURI:(id)arg1;
- (id)initWithDataLoader:(id)arg1 URLResolver:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

