//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SearchViewModelSettings;

@interface SPTSearchHubSettings : NSObject
{
    SearchViewModelSettings *_searchSettings;
    id <SPTProductState> _productState;
}

@property(readonly, nonatomic) id <SPTProductState> productState; // @synthesize productState=_productState;
@property(readonly, nonatomic) SearchViewModelSettings *searchSettings; // @synthesize searchSettings=_searchSettings;
- (void).cxx_destruct;
- (id)initWithSearchSettings:(id)arg1 productState:(id)arg2;

@end

