//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCContextCardActionExecutor.h"

@class SCContextCardsResponse, SCContextQuery;

@interface SCContextCardResponseAction : SCContextCardActionExecutor
{
    SCContextCardsResponse *_response;
    SCContextQuery *_query;
}

- (void).cxx_destruct;
- (void)executeAction:(id)arg1;
- (id)initWithCardsResponse:(id)arg1 queries:(id)arg2;

@end
