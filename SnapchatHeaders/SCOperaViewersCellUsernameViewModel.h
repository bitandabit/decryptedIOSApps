//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCOperaViewersCellBaseViewModel.h"

@class NSString;
@protocol SCOperaViewersContextTableDataEntry;

@interface SCOperaViewersCellUsernameViewModel : SCOperaViewersCellBaseViewModel
{
    _Bool _hideSeparator;
    _Bool _hideCaptureIconImageView;
    _Bool _showIcon;
    id <SCOperaViewersContextTableDataEntry> _dataEntry;
    NSString *_loadingIconImageName;
}

@property(copy, nonatomic) NSString *loadingIconImageName; // @synthesize loadingIconImageName=_loadingIconImageName;
@property(nonatomic) _Bool showIcon; // @synthesize showIcon=_showIcon;
@property(nonatomic) _Bool hideCaptureIconImageView; // @synthesize hideCaptureIconImageView=_hideCaptureIconImageView;
@property(nonatomic) _Bool hideSeparator; // @synthesize hideSeparator=_hideSeparator;
@property(retain, nonatomic) id <SCOperaViewersContextTableDataEntry> dataEntry; // @synthesize dataEntry=_dataEntry;
- (void).cxx_destruct;

@end

