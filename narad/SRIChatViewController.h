//
//  SRIChatViewController.h
//  narad
//
//  Created by srjk on 8/25/13.
//  Copyright (c) 2013 srjk. All rights reserved.
//

#import "AMBubbleTableViewController.h"
#import <ECSlidingViewController/ECSlidingViewController.h>
#import "SRIContactPickerViewController.h"

@interface SRIChatViewController : AMBubbleTableViewController <SRIPickedContacts>
@property (nonatomic, retain) NSNumber * topic_id;
@property (nonatomic, retain) NSArray * addedContacts;

- (IBAction)revealUnderRight:(id)sender;
- (IBAction)back:(id)sender;
@end
