//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, NSURL, UIColor;

@interface SCOnDemandGeofilterTableViewCellViewModel : NSObject
{
    _Bool _indicatorHidden;
    NSString *_name;
    NSString *_time;
    NSString *_statusString;
    UIColor *_statusColor;
    NSURL *_geofilterURL;
}

@property(nonatomic) _Bool indicatorHidden; // @synthesize indicatorHidden=_indicatorHidden;
@property(retain, nonatomic) NSURL *geofilterURL; // @synthesize geofilterURL=_geofilterURL;
@property(retain, nonatomic) UIColor *statusColor; // @synthesize statusColor=_statusColor;
@property(copy, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end

