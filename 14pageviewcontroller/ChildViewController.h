//
//  ChildViewController.h
//  14PageViewController
//
//  Created by Alejandro Gomez on 21/01/14.
//  Copyright (c) 2014 Intergrupo. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ChildViewController : UIViewController

@property (nonatomic, assign) NSInteger index;
@property (nonatomic, strong) IBOutlet UILabel *screenLabel;

@end
