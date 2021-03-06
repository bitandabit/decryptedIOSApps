//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SPTSearchSection;

@interface SPTEmbeddedCollectionViewViewModel : NSObject
{
    id <SPTEmbeddedCollectionViewViewModelDelegate> _delegate;
    SPTSearchSection *_searchSection;
}

@property(readonly, nonatomic) SPTSearchSection *searchSection; // @synthesize searchSection=_searchSection;
@property(nonatomic) __weak id <SPTEmbeddedCollectionViewViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)searchEntityAtIndexPath:(id)arg1;
- (unsigned long long)numberOfSearchResults;
- (id)initWithSearchSection:(id)arg1;

@end

