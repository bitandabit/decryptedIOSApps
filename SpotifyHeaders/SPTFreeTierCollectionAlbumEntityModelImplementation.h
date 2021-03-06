//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SPTFreeTierCollectionEntityModel.h"

@class NSArray, NSString;

@interface SPTFreeTierCollectionAlbumEntityModelImplementation : NSObject <SPTFreeTierCollectionEntityModel>
{
    id <SPTFreeTierCollectionEntityModelDelegate> delegate;
    id <SPTCollectionPlatformDataLoader> _collectionDataLoader;
    NSArray *_items;
    id <SPTCollectionPlatformDataLoaderRequestToken> _collectionSubscription;
}

@property(retain, nonatomic) id <SPTCollectionPlatformDataLoaderRequestToken> collectionSubscription; // @synthesize collectionSubscription=_collectionSubscription;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) id <SPTCollectionPlatformDataLoader> collectionDataLoader; // @synthesize collectionDataLoader=_collectionDataLoader;
@property(nonatomic) __weak id <SPTFreeTierCollectionEntityModelDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)handleError:(id)arg1;
- (void)updateWithResponse:(id)arg1;
- (void)subscribeCollectionAlbums;
- (void)loadMore;
- (void)loadModel;
- (id)itemAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool hasMore;
@property(readonly, nonatomic) unsigned long long numberItems;
@property(readonly, nonatomic, getter=isLoaded) _Bool loaded;
- (id)initWithCollectionDataLoader:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

